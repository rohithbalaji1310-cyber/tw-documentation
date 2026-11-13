# Git

## 1. What is Git?
Git is a distributed version control system (created by Linus Torvalds, 2005). It records snapshots
of a project so you can track changes, revert mistakes, work on parallel branches and collaborate.

## 2. Setup
```bash
git config --global user.name  "Your Name"
git config --global user.email "you@example.com"
git config --global init.defaultBranch main
git config --list
```

## 3. The three areas
```
Working directory --git add--> Staging area --git commit--> Local repository --git push--> Remote
```

## 4. Basic commands
| Command | Purpose |
|---------|---------|
| `git init` | Create a new repository |
| `git clone <url>` | Copy a remote repository |
| `git status` | Show changed / staged files |
| `git add <file>` / `git add .` | Stage changes |
| `git commit -m "msg"` | Save a snapshot |
| `git log --oneline --graph` | View history |
| `git diff` / `git diff --staged` | Show differences |
| `git restore <file>` | Discard working-tree changes |
| `git restore --staged <file>` | Unstage a file |
| `git rm`, `git mv` | Remove / rename tracked files |

## 5. Branching and merging
```bash
git branch                 # list branches
git switch -c feature-x    # create and switch
git switch main
git merge feature-x        # merge into current branch
git branch -d feature-x    # delete merged branch
```
**Merge conflicts:** Git marks conflicts with `<<<<<<<`, `=======`, `>>>>>>>`. Edit the file,
then `git add` and `git commit`.

## 6. Remotes
```bash
git remote add origin https://github.com/user/repo.git
git remote -v
git push -u origin main
git fetch              # download without merging
git pull               # fetch + merge
```

## 7. Undoing things
```bash
git commit --amend            # change the last commit
git revert <commit>           # new commit that undoes another
git reset --soft  HEAD~1      # undo commit, keep changes staged
git reset --hard  HEAD~1      # undo commit and discard changes (dangerous)
git stash / git stash pop     # temporarily shelve changes
```

## 8. .gitignore
List files Git should not track, e.g.
```
*.aux
*.log
build/
```

## 9. Tags
```bash
git tag v1.0
git push origin v1.0
```

## 10. Good commit practice
- Commit small, logical changes
- Write imperative messages: "Add chapter on Beamer themes"
- Don't commit generated files or secrets
