function my_hamming_dna(dna1,dna2){
var diff = 0;

if (dna1.length != dna2.length) {
    return -1;
  }

for (var i in dna1){
      if (dna1[i] != dna2[i]) {
          diff++;
      }
}

return diff;
}