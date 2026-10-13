/* Entry 0x08973334 | file offset 0x0017030C | FUN_08973334 | bytes 204 */

void FUN_08973334(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1[6] != param_2) {
    param_1[6] = param_2;
    piVar2 = (int *)0x0;
    piVar1 = (int *)0x0;
    if (param_1[0x314] != 0) {
      piVar2 = param_1 + 0xc;
    }
    if (param_1[0x315] != 0) {
      piVar1 = param_1 + 400;
    }
    FUN_08972bc8(*(undefined4 *)(*param_1 + param_2 * 4),piVar2,piVar1,param_3,param_4,param_5,
                 param_6);
    param_1[6] = param_2;
  }
  return;
}

