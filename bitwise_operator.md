# Bitwise Operator Note
0 = False/Low/Off \
1 = True/High/On

### AND (&) ও Operator ([4:00](https://www.youtube.com/watch?v=K55NS1BlD7E&t=240s))
- প্রত্যেকটি bit যদি 1 (অর্থাৎ True/High/On) হয় তবেই তার জন্য Output=1 (অর্থাৎ True/High/On) হবে। 
- যেকোনো একটি bit যদি 0 (অর্থাৎ False/Low/Off) হয় তবেই তার জন্য Output=0 (অর্থাৎ False/Low/Off) হবে। 
- এটি সিরিজ বর্তনী (Series Circuit) এর মত কাজ করে। 
- উদাহরণঃ একটি বাল্ব জ্বালানোর জন্য ৫টি সুইচ series এ যুক্ত আছে। এখন সবগুলো সুইচ On (On=1) করলে বাল্বটি জ্বলবে। যেকোনো একটি সুইচ Off (Off=0) থাকলেই Output=0 হবে। একইভাবে বলা যায় ৫টি bit 1 (True/High/On) এর জন্য Output=1 হবে। 

### OR (|)  Operator ([5:17](https://www.youtube.com/watch?v=K55NS1BlD7E&t=317s))
- প্রত্যেকটি bit যদি 0 (অর্থাৎ False/Low/Off) হয় তবেই তখনই Output=0 (অর্থাৎ False/Low/Off) হবে। 
- যেকোনো একটি bit যদি 1 (অর্থাৎ True/High/On) হয় তবেই তার জন্য Output=1 (অর্থাৎ True/High/On) হবে। 
- এটি সমান্তরাল বর্তনী (Parallel Circuit) এর মত কাজ করে। 
- উদাহরণঃ একটি বাল্ব জ্বালানোর জন্য ৫টি সুইচ parallelly এমন ভাবে যুক্ত আছে, যে যেকোনো একটি সুইচ On (On=1) করলে বাল্বটি জ্বলবে। কেবল মাত্র প্রত্যেকটি সুইচ Off (Off=0) থাকলেই Output=0 হবে। একইভাবে বলা যায় ৫টি bit এর মধ্যে যেকোনো একটি bit 1 (True/High/On) এর জন্য Output=1 হবে। 

### XOR (^)  Operator ([6:56](https://www.youtube.com/watch?v=K55NS1BlD7E&t=416s))
- বিজোড় সংখ্যক bit 1 (অর্থাৎ True/High/On) এর জন্য Output=1 (অর্থাৎ True/High/On) হবে। 
- তাছাড়া Output=0 (অর্থাৎ False/Low/Off) হবে। 
- উদাহরণঃ ৫টি bit এর মধ্যে ১/৩/৫টি bit 1 (অর্থাৎ True/High/On) হওয়ায় Output=1 (অর্থাৎ True/High/On) হবে। তাছাড়া Output=0 (অর্থাৎ False/Low/Off) হবে। 

### NOT (~)  অথবা Complement Operator ([9:03](https://www.youtube.com/watch?v=K55NS1BlD7E&t=543s))
- কোন bit যদি 0 (অর্থাৎ False/Low/Off) হয় তবে Output=1 (অর্থাৎ True/High/On) হবে। 
- কোন bit যদি 1 (অর্থাৎ True/High/On) হয় তবে Output=0 (অর্থাৎ False/Low/Off) হবে। 
- উদাহরণঃ 100110 এর Complement হবে 011001। 

**বিঃদ্রঃ** NOT (~) এর ক্ষেত্রে কেবল মাত্র একটি Input ও একটি Output থাকবে। কিন্তু AND (&), OR (|) এবং XOR (^) এর ক্ষেত্রে দুই বা ততোধিক Input ও একটি মাত্র Output থাকবে। 

### Right Shift (>>) Operator ([11:21](https://www.youtube.com/watch?v=K55NS1BlD7E&t=681s))

### Left Shift (<<) Operator ([16:41](https://www.youtube.com/watch?v=K55NS1BlD7E&t=1001s))
