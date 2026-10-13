/* Entry 0x088D9E48 | file offset 0x000D6E20 | FUN_088d9e48 | bytes 184 */

void FUN_088d9e48(int param_1,short param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)param_2;
  if (uVar3 == 0xffffffff) {
    uVar3 = 0;
  }
  for (iVar4 = *(int *)(param_1 + 0x30); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x4c)) {
    uVar2 = *(uint *)(iVar4 + 0x10);
    if ((uVar2 & 0x200) == 0) {
      *(uint *)(iVar4 + 0x10) = uVar2 | 0x200;
      if ((uVar2 & 0x400) == 0) {
        bVar1 = true;
        if ((uVar2 & 0x1000) == 0) {
          bVar1 = false;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_0887bc2c(iVar4,uVar3 & 0xffff);
    }
  }
  return;
}

