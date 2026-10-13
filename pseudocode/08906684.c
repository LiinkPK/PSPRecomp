/* Entry 0x08906684 | file offset 0x0010365C | FUN_08906684 | bytes 116 */

undefined4 FUN_08906684(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0xb4];
  if (piVar2 != (int *)0x0) {
    param_1[0xb6] = param_2;
    param_1[0xb7] = param_3;
    iVar1 = (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),param_2,param_3)
    ;
    if (iVar1 == 1) {
      *param_1 = 1;
      return 1;
    }
  }
  return 0;
}

