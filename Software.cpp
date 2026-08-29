<!DOCTYPE html>
<html>//I am Himon lol
<head>
<title>FixMyRig - Application</title>
<style>
*{box-sizing:border-box}body{margin:0;background:#070b10;color:white;font:13px Arial;display:flex}
aside{width:170px;height:100vh;background:#0c1219;padding:15px;border-right:1px solid #26313b}
.logo{color:#00dfff;font-size:18px;margin-bottom:25px}
button{width:100%;padding:9px;margin:4px 0;background:#0d151d;color:#aaa;border:1px solid #26313b;border-radius:6px;cursor:pointer}
button:hover,.active{border-color:#00dfff;color:white}
main{flex:1;padding:25px 35px;max-width:800px;margin:0 auto}
h2{color:#00dfff;text-align:center}.sub{color:#9daab5;text-align:center;margin-bottom:20px}
.form{background:#0b1118;border:1px solid #26313b;border-radius:8px;padding:25px;margin:15px 0}
label{display:block;color:#9daab5;margin:10px 0 5px;font-size:12px}
input,select,textarea{width:100%;padding:10px;background:#111c26;border:1px solid #304454;color:white;border-radius:6px;font-size:13px}
textarea{height:60px}.row{display:flex;gap:15px}.row .field{flex:1}
.qual{background:#0d1822;border-left:3px solid #00dfff;padding:12px 16px;margin:10px 0;border-radius:4px}
.qual h4{color:#00dfff;margin:0 0 5px 0}.qual ul{color:#b0c4d4;padding-left:20px;margin:5px 0}
.contact-info{background:#0b1118;border:1px solid #26313b;border-radius:8px;padding:15px;text-align:center;margin:15px 0}
.contact-info span{color:#b0c4d4;margin:0 10px}
.submit-btn{width:100%;padding:12px;background:#00d9f5;color:#00151b;border:none;border-radius:6px;font-weight:bold;font-size:14px;cursor:pointer;margin-top:10px}
.submit-btn:hover{background:#5be6ff}
</style>
</head>
<body>
<aside><div class="logo">▣ <b>FixMyRig</b></div>
<button>▦ Dashboard</button><button>□ My Builds</button>
<button>▣ Parts Finder</button><button>👥 Community</button>
<button>△ Help Desk</button><button>☷ Compatibility</button>
<button>⚙ Settings</button><button class="active">♟ Chatbot</button></aside>
<main>
<h2>FixMyRig Hiring Interest Form</h2>
<p class="sub">Join our team to revolutionize PC component standardization and data security.</p>
<div class="form">
<div class="row"><div class="field"><label>Full Name</label><input placeholder="Enter your full name"></div><div class="field"><label>Email</label><input type="email" placeholder="Enter email"></div></div>
<label>Phone Number</label><input placeholder="+123 456 7890">
<label>Position Applied For</label><select><option>Database Quality · QA</option><option>3D Visualization Artist · UI/UX</option><option>Community Build Helper · Community Manager</option></select>
<label>Why do you want to join us?</label><textarea placeholder="Tell us about your passion for PC building..."></textarea>
</div>
<div class="qual"><h4>📘 Qualifications</h4><ul><li>Bachelor's in Computer Science or related</li><li>2+ years in software development or IT</li><li>Python, C++, Java, SQL</li><li>CompTIA A+, AWS Certified Developer</li></ul></div>
<div class="qual"><h4>🎯 Preferred Skills</h4><ul><li>English (native), French (fluent)</li><li>Git, Docker, Jenkins, Ansible, Terraform</li></ul></div>
<div class="contact-info"><span>📧 info@fixmyrig.com</span><span>📞 +123 456 7890</span><span>📍 123 Main Street, Anytown, USA</span></div>
<button class="submit-btn" onclick="submitApp()">Submit Application</button>
</main>
<script>
function submitApp(){let fields=document.querySelectorAll('input,textarea,select');let allFilled=true;fields.forEach(f=>{if(!f.value.trim())allFilled=false;});if(!allFilled){alert('Please fill in all fields.');return;}alert('✅ Application submitted successfully! We will review your application and contact you soon.');}
</script>
</body>
</html>
