/* Entry 0x0898FE98 | file offset 0x0018CE70 | FUN_0898fe98 | bytes 220 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dd35c. Boundary still requires runtime validation. */

void FUN_0898fe98(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((param_2 <= param_3) && (param_3 < 9)) {
    for (; param_2 <= param_3; param_2 = param_2 + 1) {
      if (*(char *)(*(int *)(param_1 + 0xbc) + param_2) == '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + param_2) = 1;
        *(undefined1 *)(*(int *)(param_1 + 0xbc) + param_2) = 1;
      }
      else if (*(char *)(param_1 + 0xc4) == '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + param_2) = 1;
      }
    }
    if ((*(char *)(param_1 + 0xc5) != '\0') && (uVar1 = 0, *(int *)(param_1 + 0xb8) != 1)) {
      iVar2 = *(int *)(param_1 + 0xc0);
      while( true ) {
        *(undefined1 *)(iVar2 + uVar1) = 0;
        uVar1 = uVar1 + 1;
        if (*(int *)(param_1 + 0xb8) - 1U <= uVar1) break;
        iVar2 = *(int *)(param_1 + 0xc0);
      }
    }
  }
  return;
}

