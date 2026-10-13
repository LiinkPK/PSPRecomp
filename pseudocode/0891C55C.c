/* Entry 0x0891C55C | file offset 0x00119534 | FUN_0891c55c | bytes 160 */

void FUN_0891c55c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_089d6a10;
  if ((*(uint *)(param_1 + 0x2a44) & 4) == 0) {
    FUN_0888964c(DAT_089d6a10,*(undefined4 *)(DAT_089d6a10 + 0x4c),0,
                 *(undefined4 *)(DAT_089d6a10 + 0x740),0);
    FUN_08889808(iVar2);
  }
  else {
    uVar1 = FUN_0891a44c(param_1 + 0x27e0);
    iVar2 = FUN_0891c1a4(param_1,uVar1);
    if ((iVar2 == 0) && (iVar2 = FUN_0891c1fc(param_1,0), iVar2 == 0)) {
      FUN_0891c330(param_1);
    }
  }
  return;
}

