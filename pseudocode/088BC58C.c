/* Entry 0x088BC58C | file offset 0x000B9564 | FUN_088bc58c | bytes 188 */

void FUN_088bc58c(int param_1,int param_2)

{
  param_2 = param_2 + *(char *)(param_2 + 0x763) * 0xc6;
  if (*(short *)(param_1 + 4) != -1) {
    FUN_088b765c(param_2,0,(int)*(short *)(param_1 + 4));
  }
  if (*(short *)(param_1 + 6) != -1) {
    FUN_088b765c(param_2,1,(int)*(short *)(param_1 + 6));
  }
  if (*(short *)(param_1 + 8) != -1) {
    FUN_088b765c(param_2,2,(int)*(short *)(param_1 + 8));
  }
  if (*(short *)(param_1 + 10) != -1) {
    FUN_088b765c(param_2,3,(int)*(short *)(param_1 + 10));
  }
  return;
}

