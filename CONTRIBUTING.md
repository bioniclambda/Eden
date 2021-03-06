# Contributing to Eden

This ~~markdown file~~ document explains rules for all contributions, including but not limited to code, issues, issue help, and conversation.

There are some simple general rules

1. Don't be rude
2. Don't open fake issues (this is obvious but trust me, when it happens it's frustrating)

As well as some requirements for contributing:
1. Knowing enough C to code something to contribute
2. Being able to create a pull request for it

There are also some style guidelines:
(You only have to read these if you plan on contributing code)

1: Indents should be 4 characters wide and spaces

2: Avoid brackets with one line if statements
One line if statements should look like
```
if (condition) return 0;
```
as opposed to
```
if (condition) {return 0;}
```
or
```
if (condition) {
    return
}
```
 
 3: Bracket positioning
The first bracket should be placed after the statement (such as an if or while) on the same line.
The second bracket should be placed on a new line with the same indention as the statement it closes.
Example:
```
if (condition) {
    printf("Hello, World!");
    if (condition2) {
        printf("Hello, World!");
    }
}
```
Notice that the inner closing bracket is indented on the same level as the inner if statement.

Great! Now that you've read this file (hopefully completely), you are ready to contribute to Eden
