function handleJson(jsonFile, next) {
    // jsonFile = 'AA.json'
    console.log("handleJson:", jsonFile);
    if (fs.existsSync(jsonFile)) {
        fs.readFile(jsonFile, {encoding: 'utf8'}, function (err, data){
            if (err) {
                console.log(err);
            } else {
                var obj = JSON.parse(data);

#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   printf("Hello, World!");
   return 0;
}
