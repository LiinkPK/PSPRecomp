/* Entry 0x0891166C | file offset 0x0010E644 | FUN_0891166c | bytes 228 */

void FUN_0891166c(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = param_1 + 2;
  do {
    if (*(char *)((int)puVar2 + 0xd) != '\0') {
      bVar1 = false;
      if ((param_2 == puVar2[1]) && (bVar1 = false, param_3 == *(char *)(puVar2 + 3))) {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined1 *)((int)puVar2 + 0xf) = 1;
        return;
      }
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 5;
    if (7 < iVar3) {
      iVar3 = 0;
      puVar2 = param_1 + 2;
      do {
        if (*(char *)((int)puVar2 + 0xd) == '\0') {
          FUN_08911990(puVar2,*param_1,param_2,param_3);
          return;
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 5;
      } while (iVar3 < 8);
      return;
    }
  } while( true );
}

