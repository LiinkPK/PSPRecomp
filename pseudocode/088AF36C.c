/* Entry 0x088AF36C | file offset 0x000AC344 | FUN_088af36c | bytes 116 */

void FUN_088af36c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 7;
  if (param_2 == 8) {
    uVar1 = 6;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x814) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xdd4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xdac) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x2b80) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0xd65) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  FUN_088af134(param_1,0);
  return;
}

