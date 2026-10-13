/* Entry 0x0880B9C4 | file offset 0x0000899C | FUN_0880b9c4 | bytes 224 */

void FUN_0880b9c4(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  if ((-1 < *(int *)(param_1 + 0x20c)) && (*(char *)(param_2 + 0x542) == '\0')) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x544);
    (**(code **)(iVar1 + 0x11c))
              (*(int *)(param_1 + 0x18) + (int)*(short *)(iVar1 + 0x118),*(int *)(param_1 + 0x20c),
               *(undefined4 *)(param_1 + 0x210));
  }
  if (((-1 < *(int *)(param_1 + 0x214)) && (*(char *)(param_2 + 0x542) == '\0')) &&
     (iVar1 = FUN_0883739c(*(undefined4 *)(param_1 + 0x18)), iVar1 == 1)) {
    FUN_08856d48(DAT_089d4dc8 + 0x69c0,*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x218));
  }
  FUN_088080c4(param_1,param_2,param_3);
  return;
}

