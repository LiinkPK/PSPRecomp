/* Entry 0x088A4258 | file offset 0x000A1230 | FUN_088a4258 | bytes 184 */

void FUN_088a4258(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (iVar1 = FUN_08869ab4(param_1,"voice_priority_parameter.bin"), iVar1 != 0))
     && (iVar2 = *(int *)(iVar1 + 8), iVar2 != 0)) {
    DAT_089d6d48 = FUN_088a0cb0(iVar2,"voice/voice_priority_parameter.bin");
    DAT_089d6d4c = FUN_088a0cf8(DAT_089d6d48);
    FUN_08935524(DAT_089d6d4c,*(undefined4 *)(iVar1 + 4),iVar2);
    DAT_089d6d50 = DAT_089d6d4c + 0x10;
  }
  return;
}

