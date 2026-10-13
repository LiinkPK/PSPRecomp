/* Entry 0x08973400 | file offset 0x001703D8 | FUN_08973400 | bytes 184 */

void FUN_08973400(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  
  if (param_1[6] != param_2) {
    param_1[6] = param_2;
    piVar1 = (int *)0x0;
    if (param_1[0x314] != 0) {
      piVar1 = param_1 + 0xc;
    }
    FUN_08972c14(*(undefined4 *)(*param_1 + param_2 * 4),piVar1,param_3,param_4,param_5,param_6);
    param_1[6] = param_2;
  }
  return;
}

