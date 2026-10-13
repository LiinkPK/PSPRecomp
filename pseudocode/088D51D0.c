/* Entry 0x088D51D0 | file offset 0x000D21A8 | FUN_088d51d0 | bytes 136 */

int FUN_088d51d0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  pcVar3 = s_one00_089d7838;
  iVar4 = 0;
  cVar2 = s_one00_089d7838[0];
  while ((iVar5 = 0, cVar2 != '\0' &&
         (iVar1 = FUN_0893585c(pcVar3,param_1), iVar5 = iVar4, iVar1 != 0))) {
    pcVar3 = pcVar3 + 0x18;
    iVar4 = iVar4 + 1;
    cVar2 = *pcVar3;
  }
  return iVar5;
}

