/**
 * @param {number[]} gain
 * @return {number}
 */
function largestAltitude(gain) {
    let altitude =0;
    let highest = 0;
    gain.forEach((g)=>{
        altitude+=g;
        highest = Math.max(highest,altitude);
    })
    return highest;
};