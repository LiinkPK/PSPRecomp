/* Entry 0x089066F8 | file offset 0x001036D0 | FUN_089066f8 | bytes 72 */

void FUN_089066f8(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xb4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10));
    *param_1 = 0;
  }
  return;
}

