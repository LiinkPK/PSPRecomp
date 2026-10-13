/* Entry 0x089734B8 | file offset 0x00170490 | FUN_089734b8 | bytes 80 */

void FUN_089734b8(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (param_1[0x315] != 0) {
    piVar1 = param_1 + 400;
  }
  FUN_08972ebc(*(undefined4 *)(*param_1 + param_2 * 4),piVar1,param_3);
  return;
}

