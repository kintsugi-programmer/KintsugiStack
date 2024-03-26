# Git

### Git Basics:
- `git init`: Initialize a new Git repository in the current directory.
- `git clone <repository_url>`: Clone a repository from a remote source to your local machine.
- `git add <file>`: Add a file to the staging area.
- `git commit -m "Commit message"`: Commit changes to the repository with a descriptive message.
- `git status`: Check the status of your working directory and staging area.
- `git pull`: Fetch changes from the remote repository and merge them into your current branch.
- `git push`: Push committed changes to the remote repository.

### Branching:
- `git branch`: List all branches in the repository.
- `git branch <branch_name>`: Create a new branch.
- `git checkout <branch_name>`: Switch to the specified branch.
- `git merge <branch_name>`: Merge changes from the specified branch into the current branch.
- `git branch -d <branch_name>`: Delete a branch.

### Remote Repositories:
- `git remote add <name> <url>`: Add a remote repository.
- `git remote -v`: List all remote repositories.
- `git pull <remote_name> <branch_name>`: Fetch changes from a remote repository and merge them into your current branch.
- `git push <remote_name> <branch_name>`: Push committed changes to a remote repository.

### Undoing Changes:
- `git reset <file>`: Unstage a file, but preserve its changes.
- `git reset --hard`: Discard all changes in the working directory and staging area.
- `git checkout -- <file>`: Discard changes in a file and restore it to the last committed state.
- `git revert <commit>`: Revert one or more commits.

### GitHub Flow:
1. Create a new branch for each feature or fix.
2. Make changes, commit them, and push to your forked repository.
3. Open a pull request to merge your changes into the main repository's branch.
4. Review and discuss changes with your team.
5. Merge the pull request into the main branch after approval.
6. Delete the feature branch after it's merged.

This cheat sheet covers the basics of Git and GitHub usage. Feel free to explore more advanced features as you become more familiar with the tools!