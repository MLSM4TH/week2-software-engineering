# Assignment 2: git commit push & pull

Time to complete: ~1 hour
Teams: 2 persons per team or individual

## Assignment

> If you are doing this assignment individually, you'll have to do all the tasks for Person 1 and Person 2.
>
> **Failing to commit changes after each (sub-)task will result in losing points.**
>
> To pull all branches from the remote repository, use `git pull --all` or `git fetch --all`. You'll need to do it in some of the tasks.
>
> **DO NOT DELETE ANY BRANCHES THAT YOU CREATE IN THIS ASSIGNMENT!**

1. Clone the repository to your computer and open the cloned project (it's a C++ Cmake project)
2. Person 1: 

   * Add another operation class (multiplication) to the program.
   * Make sure to use this new operation in the `main`.
   * `add` & `commit` your changes.
   * `push` the changes to the remote repository.

3. Person 2:

    * `pull` the changes - you should see the new operation added by Person 1.
    * Add another operation class (subtraction) to the program.
    * Make sure to use this new operation in the `main`.
    * `add` & `commit` your changes.
    * `push` the changes to the remote repository.

4. The next part is done simultaneously by Person 1 & Person 2. Make sure that both of you have the last changes on your local computers by `pull`-ing.

   Do not edit the same files at the same time as the other person!

    Person 1:
   * Create a new branch called *readme* and switch to it.
   * In the *readme* branch, create a new file *README.md* in the main directory of the project.
   * Add some description of the project/ program in this file (it's a markdown document).
   * `add`, `commit` and `push` your changes.

    Person 2:
    
   * Create a new branch called *warnings* and switch to it.
   * In the *warnings* branch, edit *CMakeLists.txt* to enable compiler warnings for the project (you should already know how to do it, if not review your first-year classes.)
   * `add`, `commit` and `push` your changes.
   
   Person 1 or Person 2:

   * `pull` all changes, including all branches, from the remote repository. You should see that the other person has created a new branch and pushed it to the remote repository.
   * Switch to the `main` branch (`checkout`).
   * Merge the changes from both `readme` and `warnings` branch into the `main` branch (`merge`).
   * `push` the changes to the remote repository.
   * The person who hasn't done the merge should `pull` the changes from the remote repository.

5. Now you'll have to resolve a merge conflict.

    Person 1:

    * Create a new branch called *merge-conflict* and switch to it.
    * In the *merge-conflict* branch, edit *CMakeLists.txt* and change the name of the project from `week_1` to `assignment-1`.
    * `add`, `commit` and `push` your changes.

    Person 2:
    
    * Pull the changes (including all branches) from the remote repository.
    * In the *main* branch, edit *CMakeLists.txt* and change the name of the project from `week_1` to `assignment-git`.
    * `add`, `commit` and `push` your changes.


    Person 1 or Person 2:
    
    * Pull the changes (including all branches) from the remote repository. 
    * Switch to the `main` branch.
    * Merge the changes from the `merge-conflict` branch into the `main` branch.
    * You should see a merge conflict. Resolve it by keeping the name `assignment-git`.
    * `add`, `commit` and `push` your changes.

6. Together, search on Internet what is the purpose of *.gitignore* (hint: it's a file). Once you know what it is do the following (only one of you does the changes to the repo, the other helps).

    * Add a *.gitignore* file to your project's main directory.
    * Make sure that you add the patterns in *.gitignore* to ignore the build directories (they begin with *cmake-build-*).
    * Delete the build directories from your project.
    * `add`, `commit` and `push` your changes.
    * Verify that the remote repository doesn't contain the build directories anymore.
