/* Entry 0x0887DE04 | file offset 0x0007ADDC | FUN_0887de04 | bytes 272 */

void FUN_0887de04(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  FUN_089a03dc(5);
  FUN_089a0384(0x15);
  FUN_089a0384(9);
  FUN_089a12a4(0,2,3,0,0);
  iVar3 = 0;
  while( true ) {
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x168);
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x48);
    }
    if (iVar3 == 0) break;
    uVar2 = *(uint *)(iVar3 + 0x10);
    if (((uVar2 & 0x200) == 0) && ((uVar2 & 0x8000) == 0)) {
      *(uint *)(iVar3 + 0x10) = uVar2 | 0x200;
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
      FUN_0887bc2c(iVar3,0xfff0);
    }
  }
  FUN_089a03dc(0x15);
  FUN_089a0384(5);
  return;
}

