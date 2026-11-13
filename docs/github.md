# GitHub

## 1. What is GitHub?
GitHub is a web platform for hosting Git repositories with collaboration features: issues, pull
requests, code review, project boards, automation (Actions) and static hosting (Pages).

## 2. Getting started
1. Create an account at <https://github.com>.
2. Click **New repository**, choose a name, visibility, and optionally add README, `.gitignore`, licence.
3. Connect your local project:
```bash
git remote add origin https://github.com/<username>/tw-documentation.git
git branch -M main
git push -u origin main
```
Authenticate with a **Personal Access Token** (HTTPS) or an **SSH key** (`ssh-keygen -t ed25519`).

## 3. Core concepts
| Concept | Description |
|---------|-------------|
| Repository | Project folder with full history |
| Fork | Your own copy of someone else's repo |
| Clone | Local copy of a repo |
| Branch | Parallel line of development |
| Pull Request (PR) | Proposal to merge changes, with review |
| Issue | Bug report, task or feature request |
| Release | Tagged, downloadable version |
| README | Landing page of the repository |

## 4. Typical workflow (fork & pull request)
1. **Fork** the repository.
2. `git clone` your fork.
3. `git switch -c fix-typo`
4. Edit, `git add`, `git commit`, `git push origin fix-typo`.
5. Open a **Pull Request** on GitHub; respond to review comments.
6. Maintainer merges; you sync your fork with `upstream`.

## 5. Features
- **Issues & Projects:** labels, milestones, assignees, kanban boards
- **GitHub Actions:** CI/CD workflows in `.github/workflows/*.yml`
- **GitHub Pages:** publish docs (e.g. Doxygen HTML) at `https://<user>.github.io/<repo>`
- **Wiki, Discussions, Security alerts, Dependabot**
- **Collaborators & permissions**, protected branches, code owners

## 6. Markdown on GitHub
```markdown
# Heading
**bold**, *italic*, `code`
- bullet   1. numbered
[link](https://github.com)  ![image](images/pic.png)
| table | header |
```

## 7. Best practices
- Write a clear README, add a LICENSE and `.gitignore`
- Use descriptive branch names and small, reviewable PRs
- Link PRs to issues (`Fixes #12`)
- Never commit passwords, tokens or API keys

## 8. Publishing these docs with GitHub Pages
*Settings → Pages → Source: Deploy from branch → `main` / `/docs`* — the contents of `docs/` become a website.
