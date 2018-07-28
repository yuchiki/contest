declare function require(x: string): any;

    const main = (input: string[][]) => {
        const s: string[] = input[0];
        if (s.every((c) => c != 'Y')) {
            console.log('three');
        } else {
            console.log('four');
        }
    };

const whole_input: string = require('fs').readFileSync('/dev/stdin', 'utf8');
main(whole_input.split('\n').map((s: string) => s.split(' ')));
