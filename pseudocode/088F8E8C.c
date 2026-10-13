/* Entry 0x088F8E8C | file offset 0x000F5E64 | FUN_088f8e8c | bytes 292 */

void FUN_088f8e8c(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  FUN_088f93e8((short *)(param_1 + 0xa74));
  cVar1 = *(char *)(param_2 + 0xba);
  *(short *)(param_1 + 0xa74) = (short)cVar1;
  if (cVar1 < 0) {
    *(undefined1 *)(param_1 + 0xa76) = 0;
    *(undefined1 *)(param_1 + 0xa77) = 0;
  }
  else {
    iVar2 = FUN_088b9044(param_3,(int)cVar1);
    *(undefined1 *)(param_1 + 0xa76) = *(undefined1 *)(iVar2 + 1);
    *(undefined1 *)(param_1 + 0xa77) = *(undefined1 *)(iVar2 + 2);
  }
  iVar2 = 0;
  do {
    iVar4 = 0;
    do {
      pcVar3 = (char *)(param_2 + 0xbb + iVar4 * 2);
      if ((*pcVar3 != -1) && (pcVar3[1] == iVar2)) {
        pcVar3 = (char *)FUN_088b9044(param_3,(int)*pcVar3);
        iVar4 = param_1 + iVar2 * 4;
        *(short *)(iVar4 + 0xa78) = (short)*pcVar3;
        *(char *)(iVar4 + 0xa7a) = pcVar3[1];
        *(char *)(iVar4 + 0xa7b) = pcVar3[2];
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
    iVar2 = iVar2 + 1;
    if (4 < iVar2) {
      return;
    }
  } while( true );
}

