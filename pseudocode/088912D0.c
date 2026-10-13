/* Entry 0x088912D0 | file offset 0x0008E2A8 | FUN_088912d0 | bytes 120 */

bool FUN_088912d0(char *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_a0 [12];
  undefined2 local_94;
  undefined1 auStack_48 [61];
  char local_b;
  
  if (*param_1 == '\0') {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_088916a4(param_1,auStack_a0);
    if (iVar2 == 0) {
      iVar2 = FUN_08891894(param_1,auStack_48,local_94);
      if (iVar2 == 0) {
        bVar1 = -1 < local_b;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

