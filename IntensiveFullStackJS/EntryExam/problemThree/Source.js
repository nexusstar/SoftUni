function solution(input) {
    var openShopRegexPattern = /\/start ([A-Za-z0-9]+)\//g;
    var closeShopRegexPattern = /\/end ([A-Za-z0-9]+)\//g;
    var itemInputRegexPattern = /\/([A-Za-z0-9]+) count=\|([0-9]+)\| price=\|([0-9\.]+)\|\//g;
    var shopOpened = false;
    var currentLine;
    var currentOpenedShopName = "";
    var currentOpenedShopProducts = new Array();
    var currentOpenedShopProfit = 0.0;
    var currentShopOutput = "";
    var totalShopsProfit = 0.0;
    var avgShopsProfit = 0.0;
    var shopsCount = 0;

    for (var i = 0; i <= input.length - 1; i++) {
        input[i].trim();

        if ((input[i].match(openShopRegexPattern)) && (shopOpened == false)) {
            shopOpened = true;
            var match = openShopRegexPattern.exec(input[i]);
            currentOpenedShopName = match[1];
        }

        if ((input[i].match(itemInputRegexPattern)) && (shopOpened == true)) {
            var matches = itemInputRegexPattern.exec(input[i]);
            currentOpenedShopProducts.push(matches[1]);
            currentOpenedShopProfit += parseFloat(matches[2]) * parseFloat(matches[3]);
        }

        if ((input[i].match(closeShopRegexPattern)) && (shopOpened == true)) {
            var match = closeShopRegexPattern.exec(input[i]);
            var matchedShopName = match[1];
            if (matchedShopName == currentOpenedShopName) {
                // Print output
                var printProducts = currentOpenedShopProducts.join(', ');
                currentShopOutput = "Name: " + currentOpenedShopName + ", Products: [" + printProducts + "], Profit: " + currentOpenedShopProfit.toFixed(2);
                console.log(currentShopOutput);

                // reset
                shopOpened = false;
                totalShopsProfit += currentOpenedShopProfit;
                currentOpenedShopProfit = 0.0;
                currentOpenedShopName = "";
                currentOpenedShopProducts = [];
                currentShopOutput = "";
                shopsCount += 1;
            }
        }
    }

    // total output
    avgShopsProfit = totalShopsProfit / shopsCount;
    var totalOutput = "Total: " + totalShopsProfit.toFixed(2) + ", Average Profit: " + avgShopsProfit.toFixed(2);
    console.log(totalOutput);
}
