/* Entry 0x088A0AB4 | file offset 0x0009DA8C | FUN_088a0ab4 | bytes 184 */

void FUN_088a0ab4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (iVar1 = FUN_08869ab4(param_1,"se_override.bin"), iVar1 != 0)) &&
     (iVar2 = *(int *)(iVar1 + 8), iVar2 != 0)) {
    DAT_089d6c68 = FUN_088a0cb0(iVar2,"sound/se_override.bin");
    DAT_089d6c6c = FUN_088a0cf8(DAT_089d6c68);
    FUN_08935524(DAT_089d6c6c,*(undefined4 *)(iVar1 + 4),iVar2);
    DAT_089d6c70 = DAT_089d6c6c + 0x10;
  }
  return;
}

