/* Entry 0x0892C7C8 | file offset 0x001297A0 | FUN_0892c7c8 | bytes 160 */

void FUN_0892c7c8(int *param_1)

{
  if (*param_1 == 1) {
    FUN_088d3f00(0,param_1 + 1,param_1 + 5);
    FUN_088d44ec(param_1 + 1,param_1 + 3,&DAT_089ced80);
    if (*(short *)(param_1[2] + 0xc) == 0xb) {
      if (param_1[9] < 0x96) {
        param_1[9] = param_1[9] + 1;
      }
      else {
        FUN_088d9f5c(param_1[2],0xc,1);
      }
    }
  }
  return;
}

