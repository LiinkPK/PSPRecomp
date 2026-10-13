/* Entry 0x089BE68C | file offset 0x001BB664 | FUN_089be68c | bytes 636 */

undefined4
FUN_089be68c(int param_1,undefined4 param_2,undefined1 param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7,int param_8,int iStackX_0,int iStackX_4,
            undefined1 uStackX_8,undefined4 uStackX_c,undefined4 param_13,undefined4 param_14,
            int param_15,undefined4 param_16)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_50;
  
  iVar2 = (uint)*(ushort *)(param_1 + 0x24) * (uint)*(ushort *)(param_1 + 0x26);
  if (iVar2 < 1) {
    uVar6 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    iVar7 = 0;
    iVar3 = *(int *)(param_1 + 0x20);
    while( true ) {
      iVar4 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      thunk_FUN_089bb004(1,*(undefined4 *)(iVar4 + iVar3));
      if (iVar2 == iVar7) break;
      iVar3 = *(int *)(param_1 + 0x20);
    }
    uVar6 = *(undefined4 *)(param_1 + 0x20);
  }
  local_50 = 0;
  thunk_FUN_089bb004(0,uVar6);
  thunk_FUN_089bb004(0,*(undefined4 *)(param_1 + 0x2c));
  iVar2 = FUN_089be470(param_2);
  if (iVar2 == 0) {
    trap(7);
  }
  *(undefined1 *)(param_1 + 0x16) = param_3;
  *(char *)(param_1 + 0x17) = (char)iVar2;
  *(short *)(param_1 + 0x14) = (short)param_5;
  *(char *)(param_1 + 0x19) = (char)param_7;
  *(short *)(param_1 + 0x10) = (short)param_2;
  *(short *)(param_1 + 0x12) = (short)param_4;
  *(char *)(param_1 + 0x18) = (char)((param_6 << 3) / iVar2);
  iVar3 = iVar2 * param_4 + 0xff;
  if (iVar3 < 0) {
    iVar3 = iVar2 * param_4 + 0x1fe;
  }
  iVar3 = param_8 * (iVar3 >> 8);
  if (iVar3 < 0x21) {
    uVar1 = (undefined1)iVar3;
  }
  else {
    uVar1 = 0x20;
  }
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  uVar6 = FUN_089bac40(param_16,0,4,4,param_8 * iStackX_0,0);
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined1 *)(param_1 + 0x29) = uStackX_8;
  *(short *)(param_1 + 0x24) = (short)param_8;
  *(char *)(param_1 + 0x28) = (char)iStackX_4;
  *(short *)(param_1 + 0x26) = (short)iStackX_0;
  *(short *)(param_1 + 0x2a) = (short)param_14;
  uVar6 = FUN_089bac40(param_16,0,0x10,1,param_14,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  if (0 < iStackX_0) {
    do {
      if (0 < param_8) {
        iVar3 = 0;
        iVar7 = local_50 * param_8 * 4;
        do {
          iVar4 = 0;
          if (iStackX_4 == 1) {
            iVar4 = iVar3;
          }
          iVar4 = FUN_089be488(iVar2,param_4,param_5,param_6,param_7,iVar4);
          if (param_15 == 0) {
            iVar5 = FUN_089bab64(param_16,uStackX_c,param_13,iVar4);
          }
          else {
            iVar5 = param_15;
            param_15 = param_15 + iVar4;
          }
          iVar3 = iVar3 + 1;
          *(int *)(*(int *)(param_1 + 0x20) + iVar7) = iVar5;
          iVar7 = iVar7 + 4;
        } while (param_8 != iVar3);
      }
      local_50 = local_50 + 1;
    } while (iStackX_0 != local_50);
  }
  return 1;
}

