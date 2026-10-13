/* Entry 0x089AD7F4 | file offset 0x001AA7CC | FUN_089ad7f4 | bytes 168 */

undefined4 FUN_089ad7f4(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    if ((param_2 == param_1) || ((param_3 & 0xc1) == 0)) {
      return 1;
    }
    uVar1 = 0x10;
    if (*(int *)(param_2 + 8) == 0) {
      uVar1 = 0;
    }
    FUN_089ab938(param_4,0,0x10,uVar1);
    FUN_089ad730(*(undefined4 *)(param_2 + 4),1,param_3 & 0xfffffffe,param_4);
    uVar1 = 1;
  }
  return uVar1;
}

