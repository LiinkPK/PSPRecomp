/* Entry 0x088E878C | file offset 0x000E5764 | FUN_088e878c | bytes 392 */

void FUN_088e878c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_110 [256];
  
  iVar2 = DAT_089d6ac8;
  uVar5 = *(uint *)(param_1 + 0x18);
  if (5 < uVar5) {
    return;
  }
  if (uVar5 == 1) {
    iVar3 = FUN_08893cf8(DAT_089d6ac8);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = FUN_08899300();
    bVar1 = false;
    if (*(int *)(iVar3 + 0x100) != 0) {
      iVar3 = FUN_08899300();
      bVar1 = false;
      if (*(int *)(iVar3 + 0x100) != 5) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      return;
    }
    bVar1 = false;
    if ((*(int *)(DAT_089d6ac8 + 0x724) != 0) &&
       (bVar1 = false, *(int *)(DAT_089d6ac8 + 0x724) != 10)) {
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x18) = 2;
  }
  else if (uVar5 != 2) {
    if (uVar5 == 3) {
      return;
    }
    if (uVar5 != 4) {
      return;
    }
    FUN_088e897c(param_1);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 5;
    return;
  }
  uVar4 = FUN_0889381c(iVar2);
  FUN_0893476c(auStack_110,"map/maparc_%s_3.mpk",uVar4);
  *(undefined4 *)(param_1 + 0x18) = 3;
  FUN_088629dc(auStack_110,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               &LAB_088e896c,param_1,1);
  return;
}

