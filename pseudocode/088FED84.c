/* Entry 0x088FED84 | file offset 0x000FBD5C | FUN_088fed84 | bytes 472 */

uint FUN_088fed84(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x1e8);
  if (*(uint *)(param_1 + 0x1e4) < iVar5 + param_3) {
    iVar3 = (int)(iVar5 + ((uint)(iVar5 >> 6) >> 0x1a)) >> 6;
    uVar4 = iVar3 * 0x40;
    iVar5 = iVar5 + iVar3 * -0x40;
    iVar3 = FUN_089a9640("DISSIDIA 012 FF",param_1 + 0x1ec,*(undefined4 *)(param_1 + 0x1d8),
                         *(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_1 + 0x1e0),uVar4);
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    FUN_08935524(*(int *)(param_1 + 0x1e0),*(int *)(param_1 + 0x1e0) + uVar4,iVar5);
    uVar2 = *(int *)(param_1 + 0x1d8) + uVar4;
    *(uint *)(param_1 + 0x1dc) =
         (uint)(uVar2 < uVar4) + *(int *)(param_1 + 0x1dc) + ((int)uVar4 >> 0x1f);
    *(uint *)(param_1 + 0x1d8) = uVar2;
    *(int *)(param_1 + 0x1e8) = iVar5;
  }
  uVar2 = *(uint *)(param_1 + 0x1e4);
  uVar4 = param_3;
  if (uVar2 <= param_3) {
    do {
      iVar3 = uVar2 - *(int *)(param_1 + 0x1e8);
      FUN_08935524(*(int *)(param_1 + 0x1e0) + *(int *)(param_1 + 0x1e8),param_2,iVar3);
      iVar5 = FUN_089a9640("DISSIDIA 012 FF",param_1 + 0x1ec,*(undefined4 *)(param_1 + 0x1d8),
                           *(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_1 + 0x1e0),
                           *(undefined4 *)(param_1 + 0x1e4));
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      uVar2 = *(uint *)(param_1 + 0x1e4);
      uVar1 = *(int *)(param_1 + 0x1d8) + uVar2;
      *(uint *)(param_1 + 0x1dc) =
           (uint)(uVar1 < uVar2) + *(int *)(param_1 + 0x1dc) + ((int)uVar2 >> 0x1f);
      *(uint *)(param_1 + 0x1d8) = uVar1;
      uVar4 = uVar4 - iVar3;
      *(undefined4 *)(param_1 + 0x1e8) = 0;
      param_2 = param_2 + iVar3;
    } while (uVar2 <= uVar4);
  }
  if (uVar4 != 0) {
    FUN_08935524(*(int *)(param_1 + 0x1e0) + *(int *)(param_1 + 0x1e8),param_2,uVar4);
    *(uint *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + uVar4;
  }
  return param_3;
}

