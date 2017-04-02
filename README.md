admission
=========

    make clean run

### output ###

```
h4s@hume-inner : ~/projects/c++/github.com/theherk/admission
[130] % make run
./admission
Please enter your GPA: 3.7
Please enter your entrance score: 41
Congratulations!  You are hereby admitted to ABC Medical University.
Please enter your GPA: 3.8
Please enter your entrance score: 21
We are sorry!  You are hereby denied admission to ABC Medical University.
Please enter your GPA: 1.1
Please enter your entrance score: 42
Congratulations!  You are hereby admitted to ABC Medical University.
Please enter your GPA: 0.0
Thank you for your use of the Admissions Software Program at ABC Medical University.
```

### notes ###

Again, your logic was nearly exact. The problem was in when the comparison operation happened.

First, when the variable `gpa` is initialized, it is set to `0.0`, so if the loop is set to `while (gpa != 0)`, no iteration through the block will happen. The program will terminate immediately. A first step workaround is to set `gpa` to anything other than `0.0`. This will cause at least one iteration to happen. However, on successive iterations, the program will not terminate immediately after setting `gpa` to `0.0` via the cli. It will however, run the remainder of the iteration then terminate if `gpa` is `0.0` when the iteration ends.

However, since the request is to terminate immediately upon inputting `0.0`, this is not sufficient; we must try another tact. I think the most idiomatic solution here is to run a forever loop, `while (true)`, then break the loop when your condition is met. This code does that. Directly after setting `gpa` via the cli we check if the value is equal to `0.0`, and continue or exit accordingly.
