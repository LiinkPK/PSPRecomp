/* Entry 0x088151A0 | file offset 0x00012178 | FUN_088151a0 | bytes 372 */

undefined4 FUN_088151a0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = (*(uint *)(param_1 + 0x560) & 0xf0) >> 4 ^ 8;
  if (uVar2 != 0xb) {
    if (uVar2 != 0xc) {
      FUN_088223f8(param_1 + 0x570);
    }
    if ((*(int *)(param_1 + 0x5f4) != 0) && (uVar2 == 0xc)) {
      uVar3 = FUN_08838300(param_1);
      FUN_0881f1c0(uVar3,*(undefined4 *)(param_1 + 0x5f4));
      FUN_08818070(param_1 + 0x5b0);
    }
  }
  if ((*(uint *)(param_1 + 0x560) & 8) != 0) {
    if ((*(ushort *)(*(int *)(param_1 + 0x564) + 10) & 1) == 0) {
      if (uVar2 == 9) {
        FUN_08821278(param_1 + 0x5dc);
      }
    }
    else if (uVar2 != 0xb) {
      FUN_08821278(param_1 + 0x5dc);
    }
  }
  iVar1 = FUN_08815ce8(param_1);
  if ((uVar2 == 9) && (iVar1 == 1)) {
    *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 1;
  }
  if ((((uVar2 == 0xc) && ((*(ushort *)(*(int *)(param_1 + 0x564) + 10) & 1) != 0)) ||
      ((uVar2 == 9 && (iVar1 == 1)))) && (iVar1 = FUN_088214b0(param_1 + 0x5dc), iVar1 == 0)) {
    FUN_0886b230(*(undefined4 *)(param_1 + 0x394));
  }
  else {
    FUN_0886b240(*(undefined4 *)(param_1 + 0x394));
    FUN_0886ca58(*(undefined4 *)(param_1 + 0x394));
  }
  return 0;
}

