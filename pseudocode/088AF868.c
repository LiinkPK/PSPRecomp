/* Entry 0x088AF868 | file offset 0x000AC840 | FUN_088af868 | bytes 292 */

undefined4 FUN_088af868(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = -1;
  if (*(int *)(iVar2 + 0x800) == 0) {
    iVar3 = FUN_088af7b0(param_1);
    iVar2 = *(int *)(param_1 + 0xc);
  }
  if (*(int *)(iVar2 + 0x2b3c) == 8) {
    FUN_08935828(iVar2 + 0xe0c,0,0x40);
    FUN_08935bb4(*(int *)(param_1 + 0xc) + 0xe0c,*(int *)(param_1 + 0xc) + 0x820,0xd);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    FUN_08935bb4(*(int *)(param_1 + 0xc) + 0xe1c,*(int *)(param_1 + 0xc) + iVar3 * 0x14,0x14);
    cVar1 = *(char *)(DAT_089d7280 + 3);
  }
  else {
    cVar1 = *(char *)(DAT_089d7280 + 3);
  }
  while (cVar1 != '\0') {
    FUN_08883f9c(DAT_089d69e0,1,0);
    cVar1 = *(char *)(DAT_089d7280 + 3);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xdd4) = 3;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x814) =
       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b3c);
  sceUtilitySavedataInitStart(*(int *)(param_1 + 0xc) + 0x7e4);
  return 1;
}

