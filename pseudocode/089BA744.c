/* Entry 0x089BA744 | file offset 0x001B771C | FUN_089ba744 | bytes 64 */

int FUN_089ba744(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((param_3 != 0) && (piVar1 = (int *)FUN_089ba654(), piVar1 != (int *)0x0)) {
    return *piVar1 + (uint)*(byte *)((int)piVar1 + 0xd);
  }
  return 0;
}

