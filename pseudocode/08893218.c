/* Entry 0x08893218 | file offset 0x000901F0 | FUN_08893218 | bytes 512 */

void FUN_08893218(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_210 [256];
  undefined1 auStack_110 [256];
  
  iVar2 = DAT_089d6ac8;
  switch(*(undefined4 *)(DAT_089d6ac8 + 0x724)) {
  case 0:
    break;
  case 1:
    iVar3 = FUN_08893cf8(DAT_089d6ac8);
    if (iVar3 != 0) {
      iVar3 = FUN_08899300();
      bVar1 = false;
      if (*(int *)(iVar3 + 0x100) != 0) {
        iVar3 = FUN_08899300();
        bVar1 = false;
        if (*(int *)(iVar3 + 0x100) != 5) {
          bVar1 = true;
        }
      }
      if (!bVar1) {
        *(undefined4 *)(iVar2 + 0x724) = 2;
      }
    }
    break;
  case 2:
    uVar4 = FUN_0889381c(DAT_089d6ac8);
    FUN_0893476c(auStack_210,"map/%s.gmo",uVar4);
    *(undefined4 *)(iVar2 + 0x724) = 3;
    FUN_088629dc(auStack_210,*(undefined4 *)(iVar2 + 0x718),*(undefined4 *)(iVar2 + 0x71c),
                 &LAB_08892e84,0,1);
    break;
  case 3:
    break;
  case 4:
    *(undefined4 *)(DAT_089d6ac8 + 0x724) = 5;
    break;
  case 5:
    FUN_08893ff4(DAT_089d6ac8,*(undefined4 *)(DAT_089d6ac8 + 0x718),
                 *(undefined4 *)(DAT_089d6ac8 + 0x720),*(undefined4 *)(DAT_089d6ac8 + 0x728),0);
    *(undefined1 *)(iVar2 + 0x6b2) = 1;
    *(undefined4 *)(iVar2 + 0x724) = 10;
    if (*(int *)(iVar2 + 0x714) != 0) {
      *(undefined4 *)(iVar2 + 0x724) = 6;
    }
    break;
  case 6:
    uVar4 = FUN_08893828(DAT_089d6ac8);
    FUN_0893476c(auStack_110,"map/%s.gmo",uVar4);
    *(undefined4 *)(iVar2 + 0x724) = 7;
    FUN_088629dc(auStack_110,*(undefined4 *)(iVar2 + 0x718),*(undefined4 *)(iVar2 + 0x71c),
                 &LAB_08892e84,0,1);
    break;
  case 7:
    break;
  case 8:
    *(undefined4 *)(DAT_089d6ac8 + 0x724) = 9;
    break;
  case 9:
    FUN_08894f38(DAT_089d6ac8 + 0x4e0,&DAT_089ca7a8,*(undefined4 *)(DAT_089d6ac8 + 0x718),
                 *(undefined4 *)(DAT_089d6ac8 + 0x71c));
    *(undefined1 *)(iVar2 + 0x610) = 1;
    *(undefined4 *)(iVar2 + 0x724) = 10;
  }
  return;
}

