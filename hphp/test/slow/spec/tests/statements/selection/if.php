<?hh

/*
   +-------------------------------------------------------------+
   | Copyright (c) 2015 Facebook, Inc. (http://www.facebook.com) |
   +-------------------------------------------------------------+
*/

// an ordinary if having 2 actions on TRUE and none on FALSE

function processTransaction() { echo "Inside processTransaction\n"; }
function postMessage() { echo "Inside postMessage\n"; }

class Name
{
    public $firstName;
    public $lastName;
}
<<__EntryPoint>> function main(): void {
error_reporting(-1);

$count = 5;

if ($count > 0)
{
    processTransaction();
    postMessage();
}

// despite the indenting that suggests the true path has 2 statements, in the
// absence of braces, the true path is the first statement only. The second statement
// is always executed.

if (0)
    echo "Line 1\n";
    echo "Line 2\n";    // always executed

// use if with all scalar types + array

$colors = varray["red", "white", "blue"];
$scalarValueList = varray[10, -100, 0, 1.234, 0.0, TRUE, FALSE, NULL, 'xx', "", $colors];

foreach ($scalarValueList as $e)
{
    $text = HH\is_any_array($e) ? 'Array' : $e;
    if ($e)
    {
        echo ">$text< is TRUE\t"; var_dump($e);
    }
    else
    {
        echo ">$text< is FALSE\t"; var_dump($e);
    }
}

// use if with an instance of a class

$aName = new Name();
var_dump($aName);

if ($aName)
{
    echo ">\$aName< is TRUE\n";
}
else
{
    echo ">\$aName< is FALSE\n";
}

// see what happens if I jump into a if statement

goto label1;

echo "Unreachable code\n";

if ($colors)
{
label1: echo "TRUE path\n";
}
else
{
    echo "FALSE path\n";
}

// show that when elses are nested, an else matches the lexically nearest preceding if that is allowed by the syntax

if (1)
    echo "Path 1\n";
    if (0)
        echo "Path 2\n";
else    // this else does NOT go with the outer if
    echo "Path 3\n";

if (1)
{
    echo "Path 1\n";
    if (0)
        echo "Path 2\n";
}
else    // this else does go with the outer if
    echo "Path 3\n";

// test elseif

$a = 10;
if ($a < 0)
    ; // ...
elseif ($a == 0)
    ; // ...
elseif ($a < 10)
    ; // ...
else
    ; // ...
}
