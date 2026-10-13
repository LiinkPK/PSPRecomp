/* Entry 0x089708F0 | file offset 0x0016D8C8 | FUN_089708f0 | bytes 348 */

void FUN_089708f0(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  switch(param_1) {
  case 0:
    uVar1 = 0;
    uVar3 = 0x109;
    break;
  case 1:
    FUN_08970a4c();
    return;
  case 2:
    uVar1 = 0x10a;
    uVar3 = 0x112;
    break;
  case 3:
    uVar1 = 0x112;
    uVar3 = 0x11a;
    break;
  case 4:
    uVar1 = 0x11a;
    uVar3 = 0x122;
    break;
  case 5:
    uVar1 = 0x122;
    uVar3 = 0x12a;
    break;
  case 6:
    uVar1 = 0x12a;
    uVar3 = 0x132;
    break;
  case 7:
    uVar1 = 0x132;
    uVar3 = 0x138;
    break;
  default:
    uVar1 = 0;
    uVar3 = 0;
  }
  if (uVar1 < uVar3) {
    piVar2 = &DAT_09b6f498 + uVar1;
    do {
      for (iVar4 = *piVar2; iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
        if ((*(byte *)(iVar4 + 8) != 0) && (*(byte *)(iVar4 + 8) < 2)) {
          FUN_0894a93c(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),
                       *(undefined4 *)(iVar4 + 0x14));
        }
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < (int)uVar3);
  }
  return;
}

