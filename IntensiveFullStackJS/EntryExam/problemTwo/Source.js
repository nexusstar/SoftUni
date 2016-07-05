function solution(input) {
    var matrix = new Array(input.length - 1);
    var safeBugsCount = 0;
    var size = input.length - 2;

    // Fill matrix
    for (var row = 0; row <= input.length - 2; row++) {
        matrix[row] = new Array(input[row].length);
        for (var col = 0; col <= input[row].length - 1; col++) {
            matrix[row][col] = input[row].charAt(col);
        }
    }

    // Do commands / logic
    for (var command = 0; command <= input[input.length - 1].length - 1; command++) {

        // If command is U (up)
        // works
        if (input[input.length - 1].charAt(command) == 'U') {
            for (var row = 0; row <= size; row++) {
                for (var col = 0; col <= size; col++) {
                    if (matrix[row][col] == '@') {
                        try {
                            if (matrix[row - 1][col] == '@') {
                                matrix[row - 1][col] = '@';
                                matrix[row][col] = '*';
                            } else if (matrix[row - 1][col] == '*') {
                                matrix[row - 1][col] = '@';
                                matrix[row][col] = '*';
                            } else if (matrix[row - 1][col] == '#') {
                                matrix[row - 1][col] = '#';
                                matrix[row][col] = '*';
                            }
                        } catch(err) {
                            matrix[row][col] = '*';
                            safeBugsCount += 1;
                        }
                    }
                }
            }
        }

        // If command is D (down)
        // works
        if (input[input.length - 1].charAt(command) == 'D') {
            for (var row = 0; row <= size; row++) {
                for (var col = 0; col <= size; col++) {
                    if (matrix[row][col] == '@') {
                        try {
                            if (matrix[row + 1][col] == '@') {
                                matrix[row + 1][col] = 'B';
                                matrix[row][col] = '*';
                            } else if (matrix[row + 1][col] == '*') {
                                matrix[row + 1][col] = 'B';
                                matrix[row][col] = '*';
                            } else if (matrix[row + 1][col] == '#') {
                                matrix[row + 1][col] = '#';
                                matrix[row][col] = '*';
                            }
                        } catch(err) {
                            matrix[row][col] = '*';
                            safeBugsCount += 1;
                        }
                    }
                }
            }

            // to not confuse old bugs
            for (var row = 0; row <= size; row++) {
                for (var col = 0; col <= size; col++) {
                    if (matrix[row][col] == 'B') {
                        matrix[row][col] = '@';
                    }
                }
            }
        }

        // If command is L (left)
        if (input[input.length - 1].charAt(command) == 'L') {
            for (var row = 0; row <= size; row++) {
                for (var col = 0; col <= size; col++) {
                    if (matrix[row][col] == '@') {
                        try {
                            if (matrix[row][col + 1] == undefined) {
                                matrix[row][col] = '*';
                                safeBugsCount += 1;
                            } else if (matrix[row][col - 1] == '@') {
                                matrix[row][col - 1] = 'B';
                                matrix[row][col] = '*';
                            } else if (matrix[row][col - 1] == '*') {
                                matrix[row][col - 1] = 'B';
                                matrix[row][col] = '*';
                            } else if (matrix[row][col - 1] == '#') {
                                matrix[row][col - 1] = '#';
                                matrix[row][col] = '*';
                            }
                        } catch(err) {
                            matrix[row][col] = '*';
                            safeBugsCount += 1;
                        }
                    }
                }
            }

            // to not confuse old bugs
            for (var row = 0; row <= size; row++) {
                for (var col = 0; col <= size; col++) {
                    if (matrix[row][col] == 'B') {
                        matrix[row][col] = '@';
                    }
                }
            }
        }

        // If command is R (right)
        if (input[input.length - 1].charAt(command) == 'R') {
            for (var row = 0; row <= size; row++) {
                for (var col = 0; col <= size; col++) {
                    if (matrix[row][col] == '@') {
                        try {
                            if (matrix[row][col + 1] == undefined) {
                                matrix[row][col] = '*';
                                safeBugsCount += 1;
                            } else if (matrix[row][col + 1] == '@') {
                                matrix[row][col + 1] = 'B';
                                matrix[row][col] = '*';
                            } else if (matrix[row][col + 1] == '*') {
                                matrix[row][col + 1] = 'B';
                                matrix[row][col] = '*';
                            } else if (matrix[row][col + 1] == '#') {
                                matrix[row][col + 1] = '#';
                                matrix[row][col] = '*';
                            }
                        } catch(err) {
                            matrix[row][col] = '*';
                            safeBugsCount += 1;
                        }
                    }
                }
            }

            // to not confuse old bugs
            for (var row = 0; row <= size; row++) {
                for (var col = 0; col <= size; col++) {
                    if (matrix[row][col] == 'B') {
                        matrix[row][col] = '@';
                    }
                }
            }
        }
    }

    console.log("Safe Bugs: " + safeBugsCount);
}
