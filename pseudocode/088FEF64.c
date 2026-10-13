/* Entry 0x088FEF64 | file offset 0x000FBF3C | FUN_088fef64 | bytes 584 */

/* WARNING: Removing unreachable block (ram,0x088ff164) */

int FUN_088fef64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
                undefined4 uStackX_0,int iStackX_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  DAT_089d8120 = param_1;
  FUN_08935828(param_1,0,0x400);
  *(int *)(param_1 + 0x2f4) = param_7 * iStackX_4 * 2;
  *(int *)(param_1 + 0x1d0) = param_7;
  *(undefined4 *)(param_1 + 0x1d4) = 1;
  *(undefined4 *)(param_1 + 0x1e4) = param_4;
  *(undefined4 *)(param_1 + 0x1e0) = param_3;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  iVar3 = param_1 + 0x1ec;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  FUN_08935bb4(iVar3,param_2,0x80);
  iVar1 = FUN_089aa818(2);
  if (((-1 < iVar1) && (iVar1 = FUN_089aa748("_%04d",0,0xffffffff), -1 < iVar1)) &&
     (iVar1 = FUN_089aa264("DISSIDIA 012 FF",iVar3), -1 < iVar1)) {
    iVar1 = FUN_089ab008("DISSIDIA 012 FF",iVar3,*(undefined4 *)(param_1 + 0x1e0),0x40);
    if (iVar1 == 0) {
      FUN_089a89e4(param_1,param_1,&LAB_088fef5c,FUN_088fed84,FUN_088ff4a8);
      FUN_089a7474(param_1);
      FUN_089a7484(param_1);
      FUN_089a8810(param_1,param_5,param_6,param_7 * 0x1863c,100000,0x6364);
      uVar2 = FUN_089a749c(param_1);
      *(undefined4 *)(param_1 + 0x2f0) = uVar2;
      FUN_089a8a1c(param_1,*(undefined4 *)(param_1 + 0x1d4),uStackX_0,param_8,0x10);
      iVar1 = FUN_089a74bc(param_1);
      if (-1 < iVar1) {
        FUN_089a7dbc(param_1);
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}

