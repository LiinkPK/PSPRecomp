/* Entry 0x08991660 | file offset 0x0018E638 | FUN_08991660 | bytes 608 */

undefined4 FUN_08991660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(DAT_089da420 + 0x8f9) == '\0') {
    uVar4 = 0;
    do {
      if ((*(int *)(DAT_089da420 + uVar4 * 4 + 8) != 0) &&
         (iVar1 = FUN_08992704(*(undefined4 *)(DAT_089da420 + uVar4 * 4 + 8),param_1), iVar1 != 0))
      {
        switch(param_2) {
        case 1:
          iVar1 = *(int *)(DAT_089da420 + uVar4 * 4 + 8);
          iVar3 = *(int *)(iVar1 + 0x50);
          uVar2 = (**(code **)(iVar3 + 0x2c))(iVar1 + *(short *)(iVar3 + 0x28),param_3);
          return uVar2;
        case 2:
          uVar2 = FUN_089923b8(*(undefined4 *)(DAT_089da420 + uVar4 * 4 + 8),param_3);
          return uVar2;
        case 3:
          uVar2 = FUN_0899243c(*(undefined4 *)(DAT_089da420 + uVar4 * 4 + 8),param_3);
          return uVar2;
        case 4:
          uVar2 = FUN_089924c8(*(undefined4 *)(DAT_089da420 + uVar4 * 4 + 8),param_3);
          return uVar2;
        case 5:
          iVar1 = *(int *)(DAT_089da420 + uVar4 * 4 + 8);
          iVar3 = *(int *)(iVar1 + 0x50);
          uVar2 = (**(code **)(iVar3 + 0x34))(iVar1 + *(short *)(iVar3 + 0x30),param_3);
          return uVar2;
        case 6:
          iVar1 = *(int *)(DAT_089da420 + uVar4 * 4 + 8);
          iVar3 = *(int *)(iVar1 + 0x50);
          uVar2 = (**(code **)(iVar3 + 0x3c))(iVar1 + *(short *)(iVar3 + 0x38),param_3);
          return uVar2;
        case 7:
          uVar2 = FUN_089925fc(*(undefined4 *)(DAT_089da420 + uVar4 * 4 + 8),param_3,param_4);
          return uVar2;
        case 8:
          uVar2 = FUN_089926d0(*(undefined4 *)(DAT_089da420 + uVar4 * 4 + 8));
          return uVar2;
        default:
          return 0;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
  }
  return 0;
}

