---
devComUrl: https://developercommunity.visualstudio.com/t/Copilot-completions-are-too-intrusive/10810929#T-ND10921637
area: GitHub Copilot
description: Only receive code suggestions when you explicitly request them in Visual Studio.
title: Copilot suggestions on demand
featureId: completions-on-demand
thumbnailImage: ../media/CompletionsOnDemandProfile.png

---


Want to be more in control of code suggestions that pop up in your editor? Now in Visual Studio, you can opt out of automatic code suggestions and only receive suggestions when you explicitly request them. 

You can configure the trigger for code suggestions in **Tools > Options > IntelliCode > General**. The default experience is **Automatically generate code completions in the Editor** and you can uncheck this setting to only receive suggestions when you explicitly request them by pressing `Alt + ,` or `Alt + .`. If there are multiple code suggestions available after requesting, you can cycle through them by pressing `Alt + ,` and `Alt + .` as well.

When triggered, a thinking hint bar will appear at your cursor position to indicate that Copilot is generating code suggestions. If no suggestions returned, the hint bar will disappear after a few seconds. If suggestions are available, you can accept them by pressing `Tab`.

![Code Completions Manually Triggered](../media/completions-on-demand.mp4)

Now, you can better customize your code suggestion experience in Visual Studio with this new setting. For example, when you want to be focused with minimum distraction, you can uncheck this setting and change it back when you want to receive more suggestions effortlessly. Please share any feedback with us, and let us know any other ways you want to customize your Copilot code suggestions experience!

### Want to try this out?
Activate GitHub Copilot Free and unlock this AI feature, plus many more.
No trial. No credit card. Just your GitHub account. [Get Copilot Free](https://github.com/settings/copilot).
