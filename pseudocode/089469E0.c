/* Entry 0x089469E0 | file offset 0x001439B8 | FUN_089469e0 | bytes 72 */

uint FUN_089469e0(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if ((int)param_3 < 0) {
    uVar1 = 0xffffffff;
  }
  else if ((param_3 & 0x1000) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)**(ushort **)(*(int *)(param_2 + 0x2c) + (param_3 & 0xffffefff) * 4);
  }
  return uVar1;
}

