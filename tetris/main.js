const canvas=document.getElementById('board');
const ctx=canvas.getContext('2d');

ctx.canvas.width=COL*BLOCK_SIZE;
ctx.canvas.height=ROW*BLOCK_SIZE;

ctx.scale(BLOCK_SIZE,BLOCK_SIZE);