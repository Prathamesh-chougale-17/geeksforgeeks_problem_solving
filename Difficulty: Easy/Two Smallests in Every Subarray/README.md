<h2><a href="https://www.geeksforgeeks.org/problems/maximum-sum-of-smallest-and-second-smallest-in-an-array/1">Two Smallests in Every Subarray</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 12pt;"><span style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline; color: #273239; font-family: Nunito, sans-serif; letter-spacing: 0.162px; background-color: #ffffff;">Given an array of integers </span><strong style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline; color: #273239; font-family: Nunito, sans-serif; letter-spacing: 0.162px; background-color: #ffffff;"><strong style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline;">arr,</strong></strong><span style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline; color: #273239; font-family: Nunito, sans-serif; letter-spacing: 0.162px; background-color: #ffffff;"> the task is to find and return the maximum sum of the </span><strong style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline; color: #273239; font-family: Nunito, sans-serif; letter-spacing: 0.162px; background-color: #ffffff;"><strong style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline;">smallest&nbsp;</strong></strong><span style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline; color: #273239; font-family: Nunito, sans-serif; letter-spacing: 0.162px; background-color: #ffffff;">and&nbsp;</span><strong style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline; color: #273239; font-family: Nunito, sans-serif; letter-spacing: 0.162px; background-color: #ffffff;"><strong style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline;">second smallest </strong></strong><span style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline; color: #273239; font-family: Nunito, sans-serif; letter-spacing: 0.162px; background-color: #ffffff;"><span style="box-sizing: border-box; margin: 0px; padding: 0px; border: 0px; vertical-align: baseline;">element</span> among all possible subarrays of size greater than one. </span>If it is not possible, then return <strong>-1</strong>.</span></p>
<p><span style="font-size: 12pt;"><strong>Examples:</strong></span></p>
<div class="pieces-code-wrapper" style="text-align: left; width: 100%; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size: 12pt;"><strong>Input: </strong>arr = [4, 3, 1, 5, 6]<strong><br>Output: </strong>11<br><strong>Explanation:&nbsp;</strong>Subarrays with smallest and second smallest are,<br>Subarray: [4, 3], smallest = 3, second smallest = 4, sum = 7<br>Subarray: [4, 3, 1], smallest = 1, second smallest = 3, sum = 4<br>Subarray: [4, 3, 1, 5], smallest = 1, second smallest = 3, sum = 4<br>Subarray: [4, 3, 1, 5, 6], smallest = 1, second smallest = 3, sum = 4<br>Subarray: [3, 1], smallest = 1, second smallest = 3, sum = 4<br>Subarray: [3, 1, 5], smallest = 1, second smallest = 3, sum = 4<br>Subarray: [3, 1, 5, 6], smallest = 1, second smallest = 3, sum = 4<br>Subarray: [1, 5], smallest = 1, second smallest = 5, sum = 6<br>Subarray: [1, 5, 6] ,smallest = 1, second smallest = 5, sum = 6<br>Subarray: [5, 6], smallest = 5, second smallest = 6, sum = 11<br>Maximum sum among all above choices is, 5 + 6 = 11, hence the answer is 11.</span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; flex-direction: row; opacity: 0; width: auto; transition: opacity 0.3s ease-out; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy-and-save" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/pieces.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy And Save</span></button><button class="pieces-btn pieces-share" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/link.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Share</span></button><button class="pieces-btn pieces-ask-copilot" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copilot.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Ask Copilot</span></button><button class="pieces-btn pieces-settings" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/settings.png" class="pieces-logo" style="margin: 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px; max-width: 100%;"></button></div></div>
<div class="pieces-code-wrapper" style="text-align: left; width: 100%; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size: 12pt;"><strong>Input: </strong>arr = [1]<strong><br>Output: </strong>-1<strong><br></strong><strong>Explanation: </strong>Here the size of array is 1, but we need minimum 2 elements. Hence, the answer is -1.</span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; flex-direction: row; opacity: 0; width: auto; transition: opacity 0.3s ease-out; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy-and-save" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/pieces.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy And Save</span></button><button class="pieces-btn pieces-share" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/link.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Share</span></button><button class="pieces-btn pieces-ask-copilot" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copilot.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Ask Copilot</span></button><button class="pieces-btn pieces-settings" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/settings.png" class="pieces-logo" style="margin: 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px; max-width: 100%;"></button></div></div>
<p><span style="font-size: 12pt;"><strong>Expected Time Complexity: </strong>O(n)</span><br><span style="font-size: 12pt;"><strong>Expected Space Complexity: </strong>O(1)</span></p>
<p><span style="font-size: 12pt;"><strong>Constraints:<br></strong>1&lt;=arr.size()&lt;=10<sup>5&nbsp;</sup><br>1&lt;=arr[i]&lt;=10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Arrays</code>&nbsp;