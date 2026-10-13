/* Entry 0x0886ADBC | file offset 0x00067D94 | FUN_0886adbc | bytes 276 */

void FUN_0886adbc(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(char *)(param_1 + 0x8e) != '\0') {
    iVar4 = 0;
    do {
      pcVar2 = (char *)(*(int *)(param_1 + 0x10c) + iVar4);
      if ((((*pcVar2 != -1) && (pcVar2[1] == '\x01')) && (pcVar2[2] != -1)) && (pcVar2[2] != '\0'))
      {
        uVar1 = FUN_089b0e78(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
        FUN_089b0fac(uVar1,1);
        puVar3 = (undefined1 *)(*(int *)(param_1 + 0x10c) + iVar4);
        FUN_0886c5c4(param_1,*puVar3,0,puVar3[2],*(undefined4 *)(param_2 + 0x44),
                     (*(uint *)(param_2 + 0x48) & 4) != 0);
        FUN_089b0fac(uVar1,0);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 3;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x8e));
  }
  return;
}

