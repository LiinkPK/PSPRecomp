/* Entry 0x088D1604 | file offset 0x000CE5DC | FUN_088d1604 | bytes 160 */

undefined4 FUN_088d1604(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1c) == -1) {
    if (param_2 == 0) {
      uVar1 = FUN_088a0d90(DAT_089d6c80,"sound/snd_menu.scd");
      *(undefined4 *)(param_1 + 0x1c) = uVar1;
    }
    else {
      iVar2 = FUN_08869ab4(param_2,"snd_menu.scd");
      if (iVar2 != 0) {
        uVar1 = FUN_088a0dbc(DAT_089d6c80,"sound/snd_menu.scd",*(undefined4 *)(iVar2 + 4),
                             *(undefined4 *)(iVar2 + 8),1);
        *(undefined4 *)(param_1 + 0x1c) = uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

