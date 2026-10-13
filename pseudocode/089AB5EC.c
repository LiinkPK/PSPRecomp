/* Entry 0x089AB5EC | file offset 0x001A85C4 | FUN_089ab5ec | bytes 64 */

int FUN_089ab5ec(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((param_3 != 0) && (piVar1 = (int *)FUN_089ab4fc(), piVar1 != (int *)0x0)) {
    return *piVar1 + (uint)*(byte *)((int)piVar1 + 0xd);
  }
  return 0;
}

