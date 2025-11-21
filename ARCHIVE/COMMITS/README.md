# 📝 GitHub Commit Etiquette Cheatsheet for Devs

A clean, readable, and maintainable git history is essential for collaboration and long-term project health. Use this cheatsheet to ensure your commits follow best practices.

---

## ✅ 1. Keep Commits **Small & Focused**

- Each commit should include only *one logical change*.
- Example: **Add Login component**, **Fix Header clicking issue**, etc.

---

## 🏷️ 2. Use **Conventional Commit Messages**

Format:  
```

<type>(scope): <short description>

```

### Common Types:
| Type     | When to Use                                          |
|----------|------------------------------------------------------|
| `feat`   | New features                                         |
| `fix`    | Bug fixes                                            |
| `refactor` | Code refactoring without behavior change            |
| `style`  | Formatting, spacing, missing semicolons, etc.        |
| `docs`   | Documentation updates                                |
| `test`   | Adding or correcting tests                           |
| `chore`  | Build process, CI configs, dep updates               |

### Examples:
- `feat(auth): add OAuth support`
- `fix(api): correct 404 on user endpoint`
- `style(header): fix mobile layout spacing`

---

## 🔀 3. Use Consistent **Branch Naming Conventions**

| Branch Type | Examples                        |
|-------------|---------------------------------|
| Feature     | `feature/add-navbar`            |
| Fix         | `fix/homepage-redirect`         |
| Chore       | `chore/setup-prettier`          |

---

## 🔗 4. Link Issues in Commits & PRs

Add `#issueNumber` in commit or pull request description to associate with GitHub issues.

```

fix(login): prevent redirect loop (#42)

```

---

## 🧼 5. Never Commit Build Artifacts

- Add irrelevant files to `.gitignore`:
```

.next/
node_modules/
dist/
.env.local

````

---

## 🧪 6. Run Linting & Tests Before Committing

Use `husky` + `lint-staged` to auto-run checks before every commit.

Example setup (`package.json`):
```json
"husky": { "hooks": { "pre-commit": "lint-staged" } },
"lint-staged": { "*.{js,jsx,ts,tsx}": ["eslint --fix", "prettier --write"] }
````

---

## 🔁 7. Commit Frequently, Push Carefully

* Commit often while working locally.
* Squash commits when merging if needed for clean history.

---

## 🧊 8. Protect `main` or `master`

* Use PRs, reviews, and CI to keep production branches clean.
* Avoid direct pushes to main unless absolutely necessary.

---

## 📌 Bonus Tips

* Keep commit descriptions concise but informative.
* Avoid messages like: `fix`, `final changes`, `wip`.
* Use `git rebase -i` to clean commit history before PR if needed.

---

💡 **Good development workflow + consistent commit hygiene = smooth collaboration and fast debugging!**

