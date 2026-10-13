/* Entry 0x089BE508 | file offset 0x001BB4E0 | FUN_089be508 | bytes 388 */

undefined4
FUN_089be508(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,uint param_7,int param_8,int iStackX_0,int iStackX_4,undefined4 uStackX_8,
            undefined4 uStackX_c,undefined4 param_13,undefined4 param_14,int param_15,
            undefined4 param_16)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_089baa90(param_16,0,0x10,param_14);
  FUN_089baa90(param_16,0,4,param_8 * iStackX_0 * 4);
  if (param_15 == 0) {
    uVar1 = FUN_089be470(param_2);
    if (param_3 == 1) {
      param_7 = param_7 + 7 & 0xfffffff8;
    }
    iVar5 = 0;
    if (0 < iStackX_0) {
      do {
        iVar4 = 0;
        if (0 < param_8) {
          do {
            iVar3 = 0;
            if (iStackX_4 == 1) {
              iVar3 = iVar4;
            }
            uVar2 = FUN_089be488(uVar1,param_4,param_5,param_6 + 0xfU & 0xfffffff0,param_7,iVar3);
            iVar4 = iVar4 + 1;
            FUN_089baa90(param_16,uStackX_c,param_13,uVar2);
          } while (param_8 != iVar4);
        }
        iVar5 = iVar5 + 1;
      } while (iStackX_0 != iVar5);
      return 1;
    }
  }
  return 1;
}

